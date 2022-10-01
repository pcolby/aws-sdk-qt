// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTREAMKEYRESPONSE_H
#define QTAWS_CREATESTREAMKEYRESPONSE_H

#include "ivsresponse.h"
#include "createstreamkeyrequest.h"

namespace QtAws {
namespace Ivs {

class CreateStreamKeyResponsePrivate;

class QTAWSIVS_EXPORT CreateStreamKeyResponse : public IvsResponse {
    Q_OBJECT

public:
    CreateStreamKeyResponse(const CreateStreamKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateStreamKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStreamKeyResponse)
    Q_DISABLE_COPY(CreateStreamKeyResponse)

};

} // namespace Ivs
} // namespace QtAws

#endif
