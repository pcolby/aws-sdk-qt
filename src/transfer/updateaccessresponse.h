// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCESSRESPONSE_H
#define QTAWS_UPDATEACCESSRESPONSE_H

#include "transferresponse.h"
#include "updateaccessrequest.h"

namespace QtAws {
namespace Transfer {

class UpdateAccessResponsePrivate;

class QTAWSTRANSFER_EXPORT UpdateAccessResponse : public TransferResponse {
    Q_OBJECT

public:
    UpdateAccessResponse(const UpdateAccessRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAccessRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAccessResponse)
    Q_DISABLE_COPY(UpdateAccessResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
