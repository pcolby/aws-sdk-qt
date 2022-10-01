// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCERESPONSE_H
#define QTAWS_CREATEINSTANCERESPONSE_H

#include "opsworksresponse.h"
#include "createinstancerequest.h"

namespace QtAws {
namespace OpsWorks {

class CreateInstanceResponsePrivate;

class QTAWSOPSWORKS_EXPORT CreateInstanceResponse : public OpsWorksResponse {
    Q_OBJECT

public:
    CreateInstanceResponse(const CreateInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInstanceResponse)
    Q_DISABLE_COPY(CreateInstanceResponse)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
