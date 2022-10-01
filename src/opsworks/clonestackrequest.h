// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLONESTACKREQUEST_H
#define QTAWS_CLONESTACKREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class CloneStackRequestPrivate;

class QTAWSOPSWORKS_EXPORT CloneStackRequest : public OpsWorksRequest {

public:
    CloneStackRequest(const CloneStackRequest &other);
    CloneStackRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloneStackRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
