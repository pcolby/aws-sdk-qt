// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXCLUSIONSREQUEST_H
#define QTAWS_LISTEXCLUSIONSREQUEST_H

#include "inspectorrequest.h"

namespace QtAws {
namespace Inspector {

class ListExclusionsRequestPrivate;

class QTAWSINSPECTOR_EXPORT ListExclusionsRequest : public InspectorRequest {

public:
    ListExclusionsRequest(const ListExclusionsRequest &other);
    ListExclusionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListExclusionsRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
