// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEEBSENCRYPTIONBYDEFAULTRESPONSE_H
#define QTAWS_ENABLEEBSENCRYPTIONBYDEFAULTRESPONSE_H

#include "ec2response.h"
#include "enableebsencryptionbydefaultrequest.h"

namespace QtAws {
namespace Ec2 {

class EnableEbsEncryptionByDefaultResponsePrivate;

class QTAWSEC2_EXPORT EnableEbsEncryptionByDefaultResponse : public Ec2Response {
    Q_OBJECT

public:
    EnableEbsEncryptionByDefaultResponse(const EnableEbsEncryptionByDefaultRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableEbsEncryptionByDefaultRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableEbsEncryptionByDefaultResponse)
    Q_DISABLE_COPY(EnableEbsEncryptionByDefaultResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
