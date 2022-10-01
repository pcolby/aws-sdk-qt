// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCESHAREASSOCIATIONSREQUEST_H
#define QTAWS_GETRESOURCESHAREASSOCIATIONSREQUEST_H

#include "ramrequest.h"

namespace QtAws {
namespace Ram {

class GetResourceShareAssociationsRequestPrivate;

class QTAWSRAM_EXPORT GetResourceShareAssociationsRequest : public RamRequest {

public:
    GetResourceShareAssociationsRequest(const GetResourceShareAssociationsRequest &other);
    GetResourceShareAssociationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourceShareAssociationsRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
