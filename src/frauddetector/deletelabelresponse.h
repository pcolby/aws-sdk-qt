// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELABELRESPONSE_H
#define QTAWS_DELETELABELRESPONSE_H

#include "frauddetectorresponse.h"
#include "deletelabelrequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteLabelResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT DeleteLabelResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    DeleteLabelResponse(const DeleteLabelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLabelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLabelResponse)
    Q_DISABLE_COPY(DeleteLabelResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
