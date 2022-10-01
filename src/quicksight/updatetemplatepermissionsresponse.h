// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETEMPLATEPERMISSIONSRESPONSE_H
#define QTAWS_UPDATETEMPLATEPERMISSIONSRESPONSE_H

#include "quicksightresponse.h"
#include "updatetemplatepermissionsrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateTemplatePermissionsResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT UpdateTemplatePermissionsResponse : public QuickSightResponse {
    Q_OBJECT

public:
    UpdateTemplatePermissionsResponse(const UpdateTemplatePermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateTemplatePermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTemplatePermissionsResponse)
    Q_DISABLE_COPY(UpdateTemplatePermissionsResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
