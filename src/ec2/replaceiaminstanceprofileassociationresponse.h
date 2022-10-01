// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPLACEIAMINSTANCEPROFILEASSOCIATIONRESPONSE_H
#define QTAWS_REPLACEIAMINSTANCEPROFILEASSOCIATIONRESPONSE_H

#include "ec2response.h"
#include "replaceiaminstanceprofileassociationrequest.h"

namespace QtAws {
namespace Ec2 {

class ReplaceIamInstanceProfileAssociationResponsePrivate;

class QTAWSEC2_EXPORT ReplaceIamInstanceProfileAssociationResponse : public Ec2Response {
    Q_OBJECT

public:
    ReplaceIamInstanceProfileAssociationResponse(const ReplaceIamInstanceProfileAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ReplaceIamInstanceProfileAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReplaceIamInstanceProfileAssociationResponse)
    Q_DISABLE_COPY(ReplaceIamInstanceProfileAssociationResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
