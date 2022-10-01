// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMETADATAREQUEST_H
#define QTAWS_GETMETADATAREQUEST_H

#include "amplifyuibuilderrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class GetMetadataRequestPrivate;

class QTAWSAMPLIFYUIBUILDER_EXPORT GetMetadataRequest : public AmplifyUIBuilderRequest {

public:
    GetMetadataRequest(const GetMetadataRequest &other);
    GetMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMetadataRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
