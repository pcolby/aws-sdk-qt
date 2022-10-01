// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENTITYTYPERESPONSE_H
#define QTAWS_DELETEENTITYTYPERESPONSE_H

#include "frauddetectorresponse.h"
#include "deleteentitytyperequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteEntityTypeResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT DeleteEntityTypeResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    DeleteEntityTypeResponse(const DeleteEntityTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEntityTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEntityTypeResponse)
    Q_DISABLE_COPY(DeleteEntityTypeResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
