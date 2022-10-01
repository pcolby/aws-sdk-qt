// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKACLRESPONSE_H
#define QTAWS_CREATENETWORKACLRESPONSE_H

#include "ec2response.h"
#include "createnetworkaclrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateNetworkAclResponsePrivate;

class QTAWSEC2_EXPORT CreateNetworkAclResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateNetworkAclResponse(const CreateNetworkAclRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateNetworkAclRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNetworkAclResponse)
    Q_DISABLE_COPY(CreateNetworkAclResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
