// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBPARAMETERGROUPREQUEST_H
#define QTAWS_DELETEDBPARAMETERGROUPREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class DeleteDBParameterGroupRequestPrivate;

class QTAWSNEPTUNE_EXPORT DeleteDBParameterGroupRequest : public NeptuneRequest {

public:
    DeleteDBParameterGroupRequest(const DeleteDBParameterGroupRequest &other);
    DeleteDBParameterGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDBParameterGroupRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
