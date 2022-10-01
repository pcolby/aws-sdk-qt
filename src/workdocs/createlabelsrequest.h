// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELABELSREQUEST_H
#define QTAWS_CREATELABELSREQUEST_H

#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class CreateLabelsRequestPrivate;

class QTAWSWORKDOCS_EXPORT CreateLabelsRequest : public WorkDocsRequest {

public:
    CreateLabelsRequest(const CreateLabelsRequest &other);
    CreateLabelsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLabelsRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
