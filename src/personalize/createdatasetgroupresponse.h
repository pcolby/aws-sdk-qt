// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASETGROUPRESPONSE_H
#define QTAWS_CREATEDATASETGROUPRESPONSE_H

#include "personalizeresponse.h"
#include "createdatasetgrouprequest.h"

namespace QtAws {
namespace Personalize {

class CreateDatasetGroupResponsePrivate;

class QTAWSPERSONALIZE_EXPORT CreateDatasetGroupResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    CreateDatasetGroupResponse(const CreateDatasetGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDatasetGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDatasetGroupResponse)
    Q_DISABLE_COPY(CreateDatasetGroupResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
