// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKACLENTRYRESPONSE_H
#define QTAWS_DELETENETWORKACLENTRYRESPONSE_H

#include "ec2response.h"
#include "deletenetworkaclentryrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteNetworkAclEntryResponsePrivate;

class QTAWSEC2_EXPORT DeleteNetworkAclEntryResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteNetworkAclEntryResponse(const DeleteNetworkAclEntryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteNetworkAclEntryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNetworkAclEntryResponse)
    Q_DISABLE_COPY(DeleteNetworkAclEntryResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
