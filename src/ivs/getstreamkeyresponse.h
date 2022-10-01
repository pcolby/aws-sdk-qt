// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTREAMKEYRESPONSE_H
#define QTAWS_GETSTREAMKEYRESPONSE_H

#include "ivsresponse.h"
#include "getstreamkeyrequest.h"

namespace QtAws {
namespace Ivs {

class GetStreamKeyResponsePrivate;

class QTAWSIVS_EXPORT GetStreamKeyResponse : public IvsResponse {
    Q_OBJECT

public:
    GetStreamKeyResponse(const GetStreamKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetStreamKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStreamKeyResponse)
    Q_DISABLE_COPY(GetStreamKeyResponse)

};

} // namespace Ivs
} // namespace QtAws

#endif
