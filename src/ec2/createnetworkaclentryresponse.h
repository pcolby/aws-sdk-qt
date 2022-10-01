// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKACLENTRYRESPONSE_H
#define QTAWS_CREATENETWORKACLENTRYRESPONSE_H

#include "ec2response.h"
#include "createnetworkaclentryrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateNetworkAclEntryResponsePrivate;

class QTAWSEC2_EXPORT CreateNetworkAclEntryResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateNetworkAclEntryResponse(const CreateNetworkAclEntryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateNetworkAclEntryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNetworkAclEntryResponse)
    Q_DISABLE_COPY(CreateNetworkAclEntryResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
