// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELABELSREQUEST_H
#define QTAWS_DELETELABELSREQUEST_H

#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class DeleteLabelsRequestPrivate;

class QTAWSWORKDOCS_EXPORT DeleteLabelsRequest : public WorkDocsRequest {

public:
    DeleteLabelsRequest(const DeleteLabelsRequest &other);
    DeleteLabelsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLabelsRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
