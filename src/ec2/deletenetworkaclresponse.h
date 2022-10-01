// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKACLRESPONSE_H
#define QTAWS_DELETENETWORKACLRESPONSE_H

#include "ec2response.h"
#include "deletenetworkaclrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteNetworkAclResponsePrivate;

class QTAWSEC2_EXPORT DeleteNetworkAclResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteNetworkAclResponse(const DeleteNetworkAclRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteNetworkAclRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNetworkAclResponse)
    Q_DISABLE_COPY(DeleteNetworkAclResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
