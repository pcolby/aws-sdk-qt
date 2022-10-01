// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLUSTERRESPONSE_H
#define QTAWS_DELETECLUSTERRESPONSE_H

#include "cloudhsmv2response.h"
#include "deleteclusterrequest.h"

namespace QtAws {
namespace CloudHsmV2 {

class DeleteClusterResponsePrivate;

class QTAWSCLOUDHSMV2_EXPORT DeleteClusterResponse : public CloudHsmV2Response {
    Q_OBJECT

public:
    DeleteClusterResponse(const DeleteClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteClusterResponse)
    Q_DISABLE_COPY(DeleteClusterResponse)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
