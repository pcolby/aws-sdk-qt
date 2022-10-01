// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTKEYSREQUEST_H
#define QTAWS_LISTKEYSREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class ListKeysRequestPrivate;

class QTAWSKMS_EXPORT ListKeysRequest : public KmsRequest {

public:
    ListKeysRequest(const ListKeysRequest &other);
    ListKeysRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListKeysRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
