// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMECLUSTERREQUEST_H
#define QTAWS_RESUMECLUSTERREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class ResumeClusterRequestPrivate;

class QTAWSREDSHIFT_EXPORT ResumeClusterRequest : public RedshiftRequest {

public:
    ResumeClusterRequest(const ResumeClusterRequest &other);
    ResumeClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResumeClusterRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
