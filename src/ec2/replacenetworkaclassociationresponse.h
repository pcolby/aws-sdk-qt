// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPLACENETWORKACLASSOCIATIONRESPONSE_H
#define QTAWS_REPLACENETWORKACLASSOCIATIONRESPONSE_H

#include "ec2response.h"
#include "replacenetworkaclassociationrequest.h"

namespace QtAws {
namespace Ec2 {

class ReplaceNetworkAclAssociationResponsePrivate;

class QTAWSEC2_EXPORT ReplaceNetworkAclAssociationResponse : public Ec2Response {
    Q_OBJECT

public:
    ReplaceNetworkAclAssociationResponse(const ReplaceNetworkAclAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ReplaceNetworkAclAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReplaceNetworkAclAssociationResponse)
    Q_DISABLE_COPY(ReplaceNetworkAclAssociationResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
