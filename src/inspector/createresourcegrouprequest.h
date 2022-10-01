// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCEGROUPREQUEST_H
#define QTAWS_CREATERESOURCEGROUPREQUEST_H

#include "inspectorrequest.h"

namespace QtAws {
namespace Inspector {

class CreateResourceGroupRequestPrivate;

class QTAWSINSPECTOR_EXPORT CreateResourceGroupRequest : public InspectorRequest {

public:
    CreateResourceGroupRequest(const CreateResourceGroupRequest &other);
    CreateResourceGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResourceGroupRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
