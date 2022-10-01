// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETTAGSFORRESOURCEREQUEST_H
#define QTAWS_SETTAGSFORRESOURCEREQUEST_H

#include "inspectorrequest.h"

namespace QtAws {
namespace Inspector {

class SetTagsForResourceRequestPrivate;

class QTAWSINSPECTOR_EXPORT SetTagsForResourceRequest : public InspectorRequest {

public:
    SetTagsForResourceRequest(const SetTagsForResourceRequest &other);
    SetTagsForResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetTagsForResourceRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
