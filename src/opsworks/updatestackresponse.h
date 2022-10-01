// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTACKRESPONSE_H
#define QTAWS_UPDATESTACKRESPONSE_H

#include "opsworksresponse.h"
#include "updatestackrequest.h"

namespace QtAws {
namespace OpsWorks {

class UpdateStackResponsePrivate;

class QTAWSOPSWORKS_EXPORT UpdateStackResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    UpdateStackResponse(const UpdateStackRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateStackRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateStackResponse)
    Q_DISABLE_COPY(UpdateStackResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
