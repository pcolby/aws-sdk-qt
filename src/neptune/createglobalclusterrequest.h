// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGLOBALCLUSTERREQUEST_H
#define QTAWS_CREATEGLOBALCLUSTERREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class CreateGlobalClusterRequestPrivate;

class QTAWSNEPTUNE_EXPORT CreateGlobalClusterRequest : public NeptuneRequest {

public:
    CreateGlobalClusterRequest(const CreateGlobalClusterRequest &other);
    CreateGlobalClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGlobalClusterRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
