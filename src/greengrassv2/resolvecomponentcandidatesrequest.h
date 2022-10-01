// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESOLVECOMPONENTCANDIDATESREQUEST_H
#define QTAWS_RESOLVECOMPONENTCANDIDATESREQUEST_H

#include "greengrassv2request.h"

namespace QtAws {
namespace GreengrassV2 {

class ResolveComponentCandidatesRequestPrivate;

class QTAWSGREENGRASSV2_EXPORT ResolveComponentCandidatesRequest : public GreengrassV2Request {

public:
    ResolveComponentCandidatesRequest(const ResolveComponentCandidatesRequest &other);
    ResolveComponentCandidatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResolveComponentCandidatesRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
