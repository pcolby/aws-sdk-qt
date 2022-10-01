// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTREAMKEYRESPONSE_H
#define QTAWS_DELETESTREAMKEYRESPONSE_H

#include "ivsresponse.h"
#include "deletestreamkeyrequest.h"

namespace QtAws {
namespace Ivs {

class DeleteStreamKeyResponsePrivate;

class QTAWSIVS_EXPORT DeleteStreamKeyResponse : public IvsResponse {
    Q_OBJECT

public:
    DeleteStreamKeyResponse(const DeleteStreamKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteStreamKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStreamKeyResponse)
    Q_DISABLE_COPY(DeleteStreamKeyResponse)

};

} // namespace Ivs
} // namespace QtAws

#endif
