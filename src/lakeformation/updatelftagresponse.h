// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELFTAGRESPONSE_H
#define QTAWS_UPDATELFTAGRESPONSE_H

#include "lakeformationresponse.h"
#include "updatelftagrequest.h"

namespace QtAws {
namespace LakeFormation {

class UpdateLFTagResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT UpdateLFTagResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    UpdateLFTagResponse(const UpdateLFTagRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateLFTagRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLFTagResponse)
    Q_DISABLE_COPY(UpdateLFTagResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
