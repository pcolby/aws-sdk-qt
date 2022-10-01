// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUNFILTEREDTABLEMETADATAREQUEST_H
#define QTAWS_GETUNFILTEREDTABLEMETADATAREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetUnfilteredTableMetadataRequestPrivate;

class QTAWSGLUE_EXPORT GetUnfilteredTableMetadataRequest : public GlueRequest {

public:
    GetUnfilteredTableMetadataRequest(const GetUnfilteredTableMetadataRequest &other);
    GetUnfilteredTableMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUnfilteredTableMetadataRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
