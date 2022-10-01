// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDATTRIBUTESTOFINDINGSREQUEST_H
#define QTAWS_ADDATTRIBUTESTOFINDINGSREQUEST_H

#include "inspectorrequest.h"

namespace QtAws {
namespace Inspector {

class AddAttributesToFindingsRequestPrivate;

class QTAWSINSPECTOR_EXPORT AddAttributesToFindingsRequest : public InspectorRequest {

public:
    AddAttributesToFindingsRequest(const AddAttributesToFindingsRequest &other);
    AddAttributesToFindingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddAttributesToFindingsRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
