// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHOSTREQUEST_H
#define QTAWS_CREATEHOSTREQUEST_H

#include "codestarconnectionsrequest.h"

namespace QtAws {
namespace CodeStarconnections {

class CreateHostRequestPrivate;

class QTAWSCODESTARCONNECTIONS_EXPORT CreateHostRequest : public CodeStarconnectionsRequest {

public:
    CreateHostRequest(const CreateHostRequest &other);
    CreateHostRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateHostRequest)

};

} // namespace CodeStarconnections
} // namespace QtAws

#endif
