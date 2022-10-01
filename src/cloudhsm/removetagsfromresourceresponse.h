// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETAGSFROMRESOURCERESPONSE_H
#define QTAWS_REMOVETAGSFROMRESOURCERESPONSE_H

#include "cloudhsmresponse.h"
#include "removetagsfromresourcerequest.h"

namespace QtAws {
namespace CloudHsm {

class RemoveTagsFromResourceResponsePrivate;

class QTAWSCLOUDHSM_EXPORT RemoveTagsFromResourceResponse : public CloudHsmResponse {
    Q_OBJECT

public:
    RemoveTagsFromResourceResponse(const RemoveTagsFromResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveTagsFromResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveTagsFromResourceResponse)
    Q_DISABLE_COPY(RemoveTagsFromResourceResponse)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
