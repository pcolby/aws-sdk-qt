// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPLACEIAMINSTANCEPROFILEASSOCIATIONRESPONSE_P_H
#define QTAWS_REPLACEIAMINSTANCEPROFILEASSOCIATIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ReplaceIamInstanceProfileAssociationResponse;

class ReplaceIamInstanceProfileAssociationResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ReplaceIamInstanceProfileAssociationResponsePrivate(ReplaceIamInstanceProfileAssociationResponse * const q);

    void parseReplaceIamInstanceProfileAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ReplaceIamInstanceProfileAssociationResponse)
    Q_DISABLE_COPY(ReplaceIamInstanceProfileAssociationResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
