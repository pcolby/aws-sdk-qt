// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECANARYRESPONSE_H
#define QTAWS_DELETECANARYRESPONSE_H

#include "syntheticsresponse.h"
#include "deletecanaryrequest.h"

namespace QtAws {
namespace Synthetics {

class DeleteCanaryResponsePrivate;

class QTAWSSYNTHETICS_EXPORT DeleteCanaryResponse : public SyntheticsResponse {
    Q_OBJECT

public:
    DeleteCanaryResponse(const DeleteCanaryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCanaryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCanaryResponse)
    Q_DISABLE_COPY(DeleteCanaryResponse)

};

} // namespace Synthetics
} // namespace QtAws

#endif
