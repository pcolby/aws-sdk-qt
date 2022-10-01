// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMMETADATAREQUEST_H
#define QTAWS_CREATECUSTOMMETADATAREQUEST_H

#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class CreateCustomMetadataRequestPrivate;

class QTAWSWORKDOCS_EXPORT CreateCustomMetadataRequest : public WorkDocsRequest {

public:
    CreateCustomMetadataRequest(const CreateCustomMetadataRequest &other);
    CreateCustomMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCustomMetadataRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
