// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGRESOURCERESPONSE_H
#define QTAWS_TAGRESOURCERESPONSE_H

#include "alexaforbusinessresponse.h"
#include "tagresourcerequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class TagResourceResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT TagResourceResponse : public AlexaForBusinessResponse {
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

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
