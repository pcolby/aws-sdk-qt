// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGRESOURCERESPONSE_H
#define QTAWS_TAGRESOURCERESPONSE_H

#include "greengrassv2response.h"
#include "tagresourcerequest.h"

namespace QtAws {
namespace GreengrassV2 {

class TagResourceResponsePrivate;

class QTAWSGREENGRASSV2_EXPORT TagResourceResponse : public GreengrassV2Response {
    Q_OBJECT

public:
    TagResourceResponse(const TagResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TagResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagResourceResponse)
    Q_DISABLE_COPY(TagResourceResponse)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
