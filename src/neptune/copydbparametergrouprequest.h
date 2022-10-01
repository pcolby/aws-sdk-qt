// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYDBPARAMETERGROUPREQUEST_H
#define QTAWS_COPYDBPARAMETERGROUPREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class CopyDBParameterGroupRequestPrivate;

class QTAWSNEPTUNE_EXPORT CopyDBParameterGroupRequest : public NeptuneRequest {

public:
    CopyDBParameterGroupRequest(const CopyDBParameterGroupRequest &other);
    CopyDBParameterGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopyDBParameterGroupRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
