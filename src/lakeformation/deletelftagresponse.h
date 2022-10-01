// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELFTAGRESPONSE_H
#define QTAWS_DELETELFTAGRESPONSE_H

#include "lakeformationresponse.h"
#include "deletelftagrequest.h"

namespace QtAws {
namespace LakeFormation {

class DeleteLFTagResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT DeleteLFTagResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    DeleteLFTagResponse(const DeleteLFTagRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLFTagRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLFTagResponse)
    Q_DISABLE_COPY(DeleteLFTagResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
