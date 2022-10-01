// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTREAMKEYSREQUEST_H
#define QTAWS_LISTSTREAMKEYSREQUEST_H

#include "ivsrequest.h"

namespace QtAws {
namespace Ivs {

class ListStreamKeysRequestPrivate;

class QTAWSIVS_EXPORT ListStreamKeysRequest : public IvsRequest {

public:
    ListStreamKeysRequest(const ListStreamKeysRequest &other);
    ListStreamKeysRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStreamKeysRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif
