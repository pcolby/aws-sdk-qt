// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMFADEVICESREQUEST_H
#define QTAWS_LISTMFADEVICESREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class ListMFADevicesRequestPrivate;

class QTAWSIAM_EXPORT ListMFADevicesRequest : public IamRequest {

public:
    ListMFADevicesRequest(const ListMFADevicesRequest &other);
    ListMFADevicesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMFADevicesRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
