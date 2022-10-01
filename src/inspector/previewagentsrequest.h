// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PREVIEWAGENTSREQUEST_H
#define QTAWS_PREVIEWAGENTSREQUEST_H

#include "inspectorrequest.h"

namespace QtAws {
namespace Inspector {

class PreviewAgentsRequestPrivate;

class QTAWSINSPECTOR_EXPORT PreviewAgentsRequest : public InspectorRequest {

public:
    PreviewAgentsRequest(const PreviewAgentsRequest &other);
    PreviewAgentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PreviewAgentsRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
