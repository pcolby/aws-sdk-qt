// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMMETADATAREQUEST_H
#define QTAWS_DELETECUSTOMMETADATAREQUEST_H

#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class DeleteCustomMetadataRequestPrivate;

class QTAWSWORKDOCS_EXPORT DeleteCustomMetadataRequest : public WorkDocsRequest {

public:
    DeleteCustomMetadataRequest(const DeleteCustomMetadataRequest &other);
    DeleteCustomMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCustomMetadataRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
