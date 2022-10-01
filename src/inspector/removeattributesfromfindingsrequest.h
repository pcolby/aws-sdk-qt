// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEATTRIBUTESFROMFINDINGSREQUEST_H
#define QTAWS_REMOVEATTRIBUTESFROMFINDINGSREQUEST_H

#include "inspectorrequest.h"

namespace QtAws {
namespace Inspector {

class RemoveAttributesFromFindingsRequestPrivate;

class QTAWSINSPECTOR_EXPORT RemoveAttributesFromFindingsRequest : public InspectorRequest {

public:
    RemoveAttributesFromFindingsRequest(const RemoveAttributesFromFindingsRequest &other);
    RemoveAttributesFromFindingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveAttributesFromFindingsRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
