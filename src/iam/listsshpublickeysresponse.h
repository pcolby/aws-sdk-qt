// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSSHPUBLICKEYSRESPONSE_H
#define QTAWS_LISTSSHPUBLICKEYSRESPONSE_H

#include "iamresponse.h"
#include "listsshpublickeysrequest.h"

namespace QtAws {
namespace Iam {

class ListSSHPublicKeysResponsePrivate;

class QTAWSIAM_EXPORT ListSSHPublicKeysResponse : public IamResponse {
    Q_OBJECT

public:
    ListSSHPublicKeysResponse(const ListSSHPublicKeysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSSHPublicKeysRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSSHPublicKeysResponse)
    Q_DISABLE_COPY(ListSSHPublicKeysResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
