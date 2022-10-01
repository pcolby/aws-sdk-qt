// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEBSENCRYPTIONBYDEFAULTRESPONSE_H
#define QTAWS_GETEBSENCRYPTIONBYDEFAULTRESPONSE_H

#include "ec2response.h"
#include "getebsencryptionbydefaultrequest.h"

namespace QtAws {
namespace Ec2 {

class GetEbsEncryptionByDefaultResponsePrivate;

class QTAWSEC2_EXPORT GetEbsEncryptionByDefaultResponse : public Ec2Response {
    Q_OBJECT

public:
    GetEbsEncryptionByDefaultResponse(const GetEbsEncryptionByDefaultRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEbsEncryptionByDefaultRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEbsEncryptionByDefaultResponse)
    Q_DISABLE_COPY(GetEbsEncryptionByDefaultResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
