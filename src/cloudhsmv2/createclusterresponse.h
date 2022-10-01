// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLUSTERRESPONSE_H
#define QTAWS_CREATECLUSTERRESPONSE_H

#include "cloudhsmv2response.h"
#include "createclusterrequest.h"

namespace QtAws {
namespace CloudHsmV2 {

class CreateClusterResponsePrivate;

class QTAWSCLOUDHSMV2_EXPORT CreateClusterResponse : public CloudHsmV2Response {
    Q_OBJECT

public:
    CreateClusterResponse(const CreateClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateClusterResponse)
    Q_DISABLE_COPY(CreateClusterResponse)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
