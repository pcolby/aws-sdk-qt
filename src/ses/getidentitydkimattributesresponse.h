// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYDKIMATTRIBUTESRESPONSE_H
#define QTAWS_GETIDENTITYDKIMATTRIBUTESRESPONSE_H

#include "sesresponse.h"
#include "getidentitydkimattributesrequest.h"

namespace QtAws {
namespace Ses {

class GetIdentityDkimAttributesResponsePrivate;

class QTAWSSES_EXPORT GetIdentityDkimAttributesResponse : public SesResponse {
    Q_OBJECT

public:
    GetIdentityDkimAttributesResponse(const GetIdentityDkimAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetIdentityDkimAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIdentityDkimAttributesResponse)
    Q_DISABLE_COPY(GetIdentityDkimAttributesResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
