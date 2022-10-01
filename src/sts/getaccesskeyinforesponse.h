// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSKEYINFORESPONSE_H
#define QTAWS_GETACCESSKEYINFORESPONSE_H

#include "stsresponse.h"
#include "getaccesskeyinforequest.h"

namespace QtAws {
namespace Sts {

class GetAccessKeyInfoResponsePrivate;

class QTAWSSTS_EXPORT GetAccessKeyInfoResponse : public StsResponse {
    Q_OBJECT

public:
    GetAccessKeyInfoResponse(const GetAccessKeyInfoRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAccessKeyInfoRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccessKeyInfoResponse)
    Q_DISABLE_COPY(GetAccessKeyInfoResponse)

};

} // namespace Sts
} // namespace QtAws

#endif
