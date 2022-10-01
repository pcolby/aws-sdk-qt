// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSSHPUBLICKEYSRESPONSE_P_H
#define QTAWS_LISTSSHPUBLICKEYSRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class ListSSHPublicKeysResponse;

class ListSSHPublicKeysResponsePrivate : public IamResponsePrivate {

public:

    explicit ListSSHPublicKeysResponsePrivate(ListSSHPublicKeysResponse * const q);

    void parseListSSHPublicKeysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSSHPublicKeysResponse)
    Q_DISABLE_COPY(ListSSHPublicKeysResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
