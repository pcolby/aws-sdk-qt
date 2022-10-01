// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPATIBLEIMAGESREQUEST_H
#define QTAWS_LISTCOMPATIBLEIMAGESREQUEST_H

#include "snowballrequest.h"

namespace QtAws {
namespace Snowball {

class ListCompatibleImagesRequestPrivate;

class QTAWSSNOWBALL_EXPORT ListCompatibleImagesRequest : public SnowballRequest {

public:
    ListCompatibleImagesRequest(const ListCompatibleImagesRequest &other);
    ListCompatibleImagesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCompatibleImagesRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif
