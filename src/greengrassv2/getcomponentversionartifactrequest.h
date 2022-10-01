// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPONENTVERSIONARTIFACTREQUEST_H
#define QTAWS_GETCOMPONENTVERSIONARTIFACTREQUEST_H

#include "greengrassv2request.h"

namespace QtAws {
namespace GreengrassV2 {

class GetComponentVersionArtifactRequestPrivate;

class QTAWSGREENGRASSV2_EXPORT GetComponentVersionArtifactRequest : public GreengrassV2Request {

public:
    GetComponentVersionArtifactRequest(const GetComponentVersionArtifactRequest &other);
    GetComponentVersionArtifactRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetComponentVersionArtifactRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
